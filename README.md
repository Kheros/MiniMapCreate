# MiniMapCreate
## Hello

As the title describes the tool i have created allows you to create minimap images for ADT tiles. So far this is just terrain with lighting, wmo and water are to come.

The tool ships with a DLL and a .lib (with header files) so you can use it in your tools as well. Usage is pretty simple ill show that in the end.

So how does it work? You open the GUI, select the path of your 3.3.5a data (!) folder and you are ready to go. You can load a continent (e.g. Kalimdor) and select the tiles youd like. Then you click build and the files are created in the path you've selected as output path.

## To use the DLL:
1. Make sure you have all the header files and the .lib in your code directory
2. #include "MinimapCreate.h"
3. Add MinimapCreate.lib to your linker dependencies
4. To get a std::shared_ptr<IMinimapCreate> you use minimapCreateInit()
5. In the thread you want to create the minimaps (important: Using it in another thread will fail!) call IMinimapCreate::initGraphics
6. Use IMinimapCreate::initFileSystem to give it a IFileHandler.
6.1 You can implement IFileHandler yourself if you have already implemented some sort of file handling OR you can use minimapCreateNewMpqHandler which will instantiate a handler that loads all MPQs in a given path and then returns files from there
7. Use IMinimapCreate::fromHandler to get a HBITMAP with the image

## [Important]
First try the exe in the debug folder. If it does not work (dll errors) try the one in the release folder.

## Greetings
## Cromon

