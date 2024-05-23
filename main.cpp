#include "Texture.h"
#include "Buttons.h"
#include "variable.h"
#include "constant.h"
#include "function.h"
using namespace std;


int WinMain(int argc, char* argv[])
{
	if (!init())
	{
		cout << "Failed to initialize!" << endl;
	}
	else
	{
		if (loadmedia())
		{
			if (loadMenuMedia())
			{
				showMenu();
				while (mainLoop)
				{
					if (isChoosing)
					{
						showModeChoice();
					}
					if(customMode) CustomMode();
					while (isRunning)
					{
						handleEvent();
						setButtonPosition();
						renderGame();
					}
				}
			}
		}
	}

	close();
	return 0;
}



