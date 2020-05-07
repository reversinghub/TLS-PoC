#include <Windows.h>

#include <stdio.h>

/* Pointer to a TLS callback function */
typedef void(__stdcall* TLS_CALLBACK_PTR)(void* instance, int reason, void* reserved);

void __stdcall tls_callback1(void* instance, int reason, void* reserved) 
{
    if (reason == DLL_PROCESS_ATTACH) {
        MessageBox(NULL, L"Hidden action in callback 1", L"Callback 1", MB_OK);
    }
}

void __stdcall tls_callback2(void* instance, int reason, void* reserved)
{
    if (reason == DLL_PROCESS_ATTACH) {
        MessageBox(NULL, L"Hidden action in callback 2", L"Callback 2", MB_OK);
        ExitProcess(0);
    }
}

#pragma comment (linker, "/INCLUDE:__tls_used")
#pragma data_seg(".CRT$XLAAA")
EXTERN_C TLS_CALLBACK_PTR p_tls_callback1 = tls_callback1;
#pragma data_seg(".CRT$XLAAB")
EXTERN_C TLS_CALLBACK_PTR p_tls_callback2 = tls_callback2;

int main(int argc, char* argv[])
{
    /* Will never be called, as the last TLS callback does ExitProcess() */
    MessageBox(NULL, L"Decoy: Hello, world!", L"From main!", MB_OK);
    return 0;
}
