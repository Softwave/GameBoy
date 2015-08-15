/* Move a sprite around */

#include <gb/gb.h>
#include <stdlib.h>
#include "Export.h"
#include "Export.c"

void main() {
	int x, y, arrow;
	x = 80;
	y = 80;
	SPRITES_8x8;

    set_sprite_data(0, 2, TileLabel);
    set_sprite_tile(0, 0);
    wait_vbl_done(); 
    move_sprite(1, 80, 80);

    SHOW_SPRITES;

    arrow = 0;

    while(!0) {
    	arrow = joypad();
    	if (arrow == J_UP) {
    		y -= 1;
    		move_sprite(1, x, y);
    	}

    	arrow = joypad();
    	if (arrow == J_DOWN) {
    		y++;
    		move_sprite(1, x, y);
    	}

    	arrow = joypad();
    	if (arrow == J_LEFT) {
    		x -= 1;
    		move_sprite(1, x, y);
    	}

    	arrow = joypad();
    	if (arrow == J_RIGHT) {
    		x += 1;
    		move_sprite(1, x, y);
    	}

    	delay(20);
    }


}