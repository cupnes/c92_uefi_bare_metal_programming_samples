#define CONOUT_ADDR	0xa3819590
#define OUTPUTSTRING_ADDR	0xa387e1b8

	.text
	.globl		efi_main
efi_main:
	/* OutputString第1引数(ConOut)をRCXへ格納 */
	movq		$CONOUT_ADDR, %rcx
	/* OutputStringのアドレスをRAXへ格納 */
	movq		$OUTPUTSTRING_ADDR, %rax
	/* ".ascii"のアドレスをRDXへ格納 */
	leaq		msg, %rdx
	/* OutputStringを呼び出す */
	callq		*%rax

	/* 無限ループ */
	jmp		.

	.data
msg:
	/* "ABCD" */
	/*.ascii		"A\0B\0C\0D\0\0\0"*/
	/* "すごーい" */
	.ascii		"Y0T0\3740D0\0\0"
	/* ボス */
	/*.ascii		"\326\0\0\0"*/
