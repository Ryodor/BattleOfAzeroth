/*
** aff_ptr.c for  in /home/dauratj/C/Battle For Azeroth/daurat_j/recruitment
** 
** Made by DAURAT Jerome
** Login   <daurat_j@etna-alternance.net>
** 
** Started on  Sat Oct  8 13:10:23 2016 DAURAT Jerome
** Last update Sat Oct  8 13:22:50 2016 DAURAT Jerome
*/

void	print_dial(int n)
{
  char*	dial[16];

  dial[0] = "Recruitment sucess ! You have recruted ";
  dial[1] = " parchments remaining\n\n";
  dial[3] = "Recruitment failed\n";
  dial[4] = " \n";
  dial[5] = "There are  you soldiers\n";
  dial[6] = "Recruiting...\n";
  dial[7] = "which soldier to choose for battle ?\n";
  dial[8] = "Type the soldier's name to choose him for battle: ";
  dial[9] = "You have choosen a soldier. Prepare for combat !\n";
  dial[10] = "You have recruted ";
  dial[11] = " soldiers\n";
  dial[12] = "You have used all you parchments \n\n";
  dial[13] = "Fly, you fools !\n\n";
  dial[14] = "Please launch the file with";
  dial[15] = " -n option followed by your pseudo\n";
  my_putstr(dial[n]);
}
