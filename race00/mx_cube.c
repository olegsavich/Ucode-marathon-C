
void mx_printchar(char c);

void mx_cube(int n)
{
    if (n <= 1) return ;
  int sizeX = n, sizeY = n * 2, sizeZ = n / 2; 
  int num = 1, k = 1, t = 1, h = 0;
  for (int i = 0; i < sizeX + 3 + sizeZ; i++)
  {
    for (int j = 0; j < sizeY + 3 + sizeZ; j++)
    {
      if ((j == 0 && (i == sizeZ + 1 || i == sizeX + 2 + sizeZ)) || (j == sizeY + 1 && (i == sizeZ + 1 || i == sizeX + sizeZ + 2)) || (i == 0 && ( j == sizeZ + 1 || j == sizeY + 2 + sizeZ)) || (j == sizeY + 2 + sizeZ && i == sizeX + 1)) 
      {
        mx_printchar ('+');
      }
      else if (j < sizeY + 1 && (i == sizeZ + 1 || i == sizeZ + sizeX + 2))
      {
        mx_printchar ('-');
      }
      else if (j > sizeZ + 1 && i == 0)
      {
        mx_printchar ('-');
      }
      else if (i > sizeZ + 1 && (j == 0 || j == sizeY + 1))
      {
          mx_printchar ('|');
      }
      else if (i < sizeX + 1 && j == sizeY + 2 + sizeZ)
      {
          mx_printchar ('|');
      }
      else if (i == num && j == sizeZ + 1 - num )
      {
          mx_printchar ('/');
          num++;  
      }
      else if (i == k && j == sizeY + 2 + sizeZ - k)
      {
        mx_printchar ('/');
        k++;
      }
      else if (j == sizeY + 2 + sizeZ - t && i == sizeX + 1 + t)
      {
        mx_printchar ('/');
        t++;
      }
      else if (j == sizeY + 2 + sizeZ - h && i > sizeX + 1)
      {
        h++;
        mx_printchar ('\n');
      }
      else if (j < sizeY + 2 + sizeZ - h && i > sizeX + 1)
      {
        mx_printchar (' ');
      }
      else if (i <= sizeX + 1)
      {
        mx_printchar(' ');
      }
    }
    
    if (i <=
     sizeX + 1)
    mx_printchar ('\n');
    
  }
}
