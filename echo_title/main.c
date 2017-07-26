struct EFI_SYSTEM_TABLE {
	char _buf[60];
	struct EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL {
		unsigned long long _buf;
		unsigned long long (*OutputString)(
			struct EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL *This,
			unsigned short *String);
	} *ConOut;
};

void efi_main(void *ImageHandle __attribute__ ((unused)),
	      struct EFI_SYSTEM_TABLE *SystemTable)
{
	SystemTable->ConOut->OutputString(SystemTable->ConOut,
  	L"\r\n\r\n\r\n\r\n\r\n\r\n\r\n"
	L"                              フルスクラッチで作る!\r\n"
	L"                           UEFIベアメタルプログラミング\r\n"
	L"\r\n\r\n\r\n\r\n\r\n\r\n\r\n"
	L"                                   大神祐真 著\r\n"
	L"\r\n\r\n\r\n\r\n\r\n\r\n\r\n"
	L"                          2017-08-11 版 へにゃぺんて 発行\r\n"
	);
	while (1);
}
