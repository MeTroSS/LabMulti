#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
  int d = 20;
MessageBox(0, "Wybierz liczb� z zakresu 1-40", "Aplikacja", MB_OK);
int iReadKey = MessageBox(0, "Czy liczba jest wi�ksza od 20?", "Aplikacja", MB_YESNO);
if (iReadKey == IDYES)
{
  iReadKey = MessageBox(0, "Czy liczba jest wi�ksza od 30?", "Aplikacja", MB_YESNO);
  if (iReadKey == IDYES)
  {
    iReadKey = MessageBox(0, "Czy liczba jest wi�ksza od 35?", "Aplikacja", MB_YESNO);
    if (iReadKey == IDYES)
    {
      iReadKey = MessageBox(0, "Czy liczba jest wi�ksza od 38?", "Aplikacja", MB_YESNO);
      if (iReadKey == IDYES)
      {
        iReadKey = MessageBox(0, "Czy liczba jest wi�ksza od 39?", "Aplikacja", MB_YESNO);
        if (iReadKey == IDYES)
        {
          iReadKey = MessageBox(0, "Twoja liczba to 40", "Aplikacja", MB_OK);
        }
        else
        {
          iReadKey = MessageBox(0, "Twoaj liczba to 39", "Aplikacja", MB_OK);
        }
      }
      else
      {
        iReadKey = MessageBox(0, "Czy liczba jest wi�ksza od 37?", "Aplikacja", MB_YESNO);
        if (iReadKey == IDYES)
        {
          iReadKey = MessageBox(0, "Twoja liczba to 38", "Aplikacja", MB_OK);
        }
        else
        {
          iReadKey = MessageBox(0, "Czy liczba jest wi�ksza od 36?", "Aplikacja", MB_YESNO);
          if (iReadKey == IDYES)
          {
            iReadKey = MessageBox(0, "Twoja liczba to37", "Aplikacja", MB_YESNO);
          }
          else
          {
            iReadKey = MessageBox(0, "Twoja libcza to 36", "Aplikacja", MB_YESNO);
          }
        }
      }
    }
    else
    {
      iReadKey = MessageBox(0, "Czy liczba jest wi�ksza od 33?", "Aplikacja", MB_YESNO);
    }
  }
  else
  {
    iReadKey = MessageBox(0, "Czy liczba jest wi�ksza od 25?", "Aplikacja", MB_YESNO);
  }
}
else
{
  iReadKey = MessageBox(0, "Czy liczba jest wi�ksza od 10?", "Aplikacja", MB_YESNO);
}
  return 0;
}