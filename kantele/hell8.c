inherit "room/room";

reset(arg)
{
   if(arg)
      return;
   short_desc = "You are in hell";
   long_desc = "You are in hell, the smell of sulphur penetrates everything.\n";
   set_light(1);
   dest_dir =
   ({
       "players/kantele/hell5", "north",
       "players/kantele/hell3", "south",
       "players/kantele/hell9", "east",
       "players/kantele/hell6", "west"
    });
}
