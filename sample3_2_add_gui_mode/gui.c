#include "efi.h"
#include "common.h"
#include "graphics.h"
#include "gui.h"

void gui(void)
{
	struct RECT r = {10, 10, 20, 20};

	ST->ConOut->ClearScreen(ST->ConOut);

	/* ファイルアイコンに見立てた矩形を描画 */
	draw_rect(r, white);

	while (TRUE);
}
