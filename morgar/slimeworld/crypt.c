#include "std.h"

object skeleton;

extra_reset() {
    object treasure;
    if (!skeleton || !living(skeleton)) {
	skeleton = clone_object("obj/monster");
	call_other(skeleton, "set_name", "skeleton");
	call_other(skeleton, "set_alias", "undead");
	call_other(skeleton, "set_level", 8);
        call_other(skeleton, "set_hp", 70);
	call_other(skeleton, "set_short", "A skeleton");
	call_other(skeleton, "set_wc", 7);
	call_other(skeleton, "set_ac", 5);
	call_other(skeleton, "set_al", -200);
	call_other(skeleton, "set_aggressive", 1);
	move_object(skeleton, this_object());
	treasure = clone_object("obj/treasure");
	call_other(treasure, "set_id", "diamond");
	call_other(treasure, "set_alias", "gem");
	call_other(treasure, "set_short", "A small diamond");
	call_other(treasure, "set_weight", 1);
	call_other(treasure, "set_value", 200);
	move_object(treasure, skeleton);
    }
}

#undef EXTRA_RESET
#define EXTRA_RESET\
    extra_reset();

THREE_EXIT("players/morgar/slimeworld/ruins", "up",
         "players/morgar/slimeworld/crypt2", "north",
         "players/morgar/slimeworld/crypt3", "south",
	 "In a dank, dark crypt",
	 "You are in the crypt under the ruined temple.  There are several\n" +
         "shattered and empty coffins lying around.  A stone staircase leads up.\n", 0)

realm() {
    return("slime");
}
