int x[9] = {2, 3, 4, 5, 6, 4, 4, 4, 4};
int y[9] = {5, 5, 5, 5, 5, 4, 3, 2, 1};
#include <MeggyJrSimple.h>
void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup();      // Required code, line 2 of 2.
}
void loop()                     // run over and over again
// Check buttons
//If left button is pressed, update all x values, wrap x values
{
  DrawT();
  DisplaySlate();    
  ClearSlate();             
  delay(100);     
  CheckButtonsPress();
    if (Button_Left)
      {
      for (int i = 0; i <9; i++)
        {     
        if (x[i] > 0)
        x[i] = x[i] - 1;
        else x[i] = 7;
        }
      }
      if (Button_Right)
      {
      for (int i = 0; i <9; i++)
        {     
        if (x[i] < 7)
        x[i] = x[i] + 1;
        else x[i] = 0;
        }
      }
      if (Button_Down)
      {
      for (int i = 0; i <9; i++)
        {     
        if (y[i] > 0)
        y[i] = y[i] - 1;
        else y[i] = 7;
        }
      }
      if (Button_Up)
      {
      for (int i = 0; i <9; i++)
        {     
        if (y[i] < 7)
        y[i] = y[i] + 1;
        else y[i] = 0;
        }
      }
}
void DrawT()
{
  for (int i = 0; i < 9; i++)
  {
    DrawPx(x[i],y[i],random(7));
  }
}

