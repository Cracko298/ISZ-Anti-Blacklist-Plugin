#include "cheats.h"
#include <stdbool.h>
#include "hid.h"
#include "values.h"
#include <string.h>

u32 offset = 0;
u32 data = 0;
u32 patch_address = 0;

void	Cracktus___Anti_Blacklist(void)
{
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000031)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00483754);
			WRITEU32(offset + 0x00482F0C, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000031)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00483758);
			WRITEU32(offset + 0x00482F10, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000031)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x0048375C);
			WRITEU32(offset + 0x00482F14, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000032)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00483F9C);
			WRITEU32(offset + 0x00482F0C, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000032)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00483FA0);
			WRITEU32(offset + 0x00482F10, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000032)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00483FA4);
			WRITEU32(offset + 0x00482F14, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000033)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x004847E4);
			WRITEU32(offset + 0x00482F0C, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000033)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x004847E8);
			WRITEU32(offset + 0x00482F10, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000033)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x004847EC);
			WRITEU32(offset + 0x00482F14, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000034)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x0048502C);
			WRITEU32(offset + 0x00482F0C, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000034)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00485030);
			WRITEU32(offset + 0x00482F10, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000034)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00485034);
			WRITEU32(offset + 0x00482F14, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000035)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00485874);
			WRITEU32(offset + 0x00482F0C, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000035)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00485878);
			WRITEU32(offset + 0x00482F10, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000035)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x0048587C);
			WRITEU32(offset + 0x00482F14, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000036)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x004860BC);
			WRITEU32(offset + 0x00482F0C, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000036)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x004860C0);
			WRITEU32(offset + 0x00482F10, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000036)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x004860C4);
			WRITEU32(offset + 0x00482F14, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000037)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00486904);
			WRITEU32(offset + 0x00482F0C, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000037)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00486908);
			WRITEU32(offset + 0x00482F10, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000037)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x0048690C);
			WRITEU32(offset + 0x00482F14, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000038)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x0048714C);
			WRITEU32(offset + 0x00482F0C, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000038)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00487150);
			WRITEU32(offset + 0x00482F10, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000038)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00487154);
			WRITEU32(offset + 0x00482F14, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000039)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00487994);
			WRITEU32(offset + 0x00482F0C, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000039)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00487998);
			WRITEU32(offset + 0x00482F10, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000039)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x0048799C);
			WRITEU32(offset + 0x00482F14, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000061)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x004881DC);
			WRITEU32(offset + 0x00482F0C, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000061)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x004881E0);
			WRITEU32(offset + 0x00482F10, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000061)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x004881E4);
			WRITEU32(offset + 0x00482F14, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000062)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00488A24);
			WRITEU32(offset + 0x00482F0C, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000062)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00488A28);
			WRITEU32(offset + 0x00482F10, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000062)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00488A2C);
			WRITEU32(offset + 0x00482F14, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000063)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x0048926C);
			WRITEU32(offset + 0x00482F0C, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000063)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00489270);
			WRITEU32(offset + 0x00482F10, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000063)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00489274);
			WRITEU32(offset + 0x00482F14, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000064)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00489AB4);
			WRITEU32(offset + 0x00482F0C, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000064)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00489AB8);
			WRITEU32(offset + 0x00482F10, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000064)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x00489ABC);
			WRITEU32(offset + 0x00482F14, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000065)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x0048A2FC);
			WRITEU32(offset + 0x00482F0C, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000065)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x0048A300);
			WRITEU32(offset + 0x00482F10, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000065)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x0048A304);
			WRITEU32(offset + 0x00482F14, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000066)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x0048AB44);
			WRITEU32(offset + 0x00482F0C, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000066)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x0048AB48);
			WRITEU32(offset + 0x00482F10, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000066)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x0048AB4C);
			WRITEU32(offset + 0x00482F14, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000067)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x0048B38C);
			WRITEU32(offset + 0x00482F0C, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000067)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x0048B390);
			WRITEU32(offset + 0x00482F10, data);
			offset = 0;
			data = 0;
		}
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429F44) == 0x00000067)
	{
		if (is_pressed(0x00000800))
		{
			data = READU32(offset + 0x0048B394);
			WRITEU32(offset + 0x00482F14, data);
			offset = 0;
			data = 0;
		}
	}
}

