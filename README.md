# MiniMapCreate


Como el título describe, esta herramienta permite crear imagenes para el minimap de los ADT en .blp. Incluye terreno e iluminación. Los WMO y el agua se añadirán más adelante

La herramienta se entrega con una DLL y un .lib (con header) para que lo puedas usar con tus herramientas también. 

## Instrucciones
1. Abre el ejecutable
2. Selecciona la ruta de tu carpeta data de la versión 3.3.5a 
3. Carga un continente (e.g. Kalimdor) y selecciona los parámetros que necesites. 
4. Haz clic en build
5. Los archivos se generarán en la carpeta que hallas establecido como “output path”.

## Como usar la DLL
1. Make sure you have all the header files and the .lib in your code directory
2. #include "MinimapCreate.h"
3. Add MinimapCreate.lib to your linker dependencies
4. To get a std::shared_ptr<IMinimapCreate> you use minimapCreateInit()
5. In the thread you want to create the minimaps (important: Using it in another thread will fail!) call IMinimapCreate::initGraphics
6. Use IMinimapCreate::initFileSystem to give it a IFileHandler.
6.1 You can implement IFileHandler yourself if you have already implemented some sort of file handling OR you can use minimapCreateNewMpqHandler which will instantiate a handler that loads all MPQs in a given path and then returns files from there
7. Use IMinimapCreate::fromHandler to get a HBITMAP with the image

## Importante
Primero usa el .exe de la carpeta Debug. Si no funciona (Bugs de DLL), usa el de la carpeta de Release.

## Greetings
## Cromon


