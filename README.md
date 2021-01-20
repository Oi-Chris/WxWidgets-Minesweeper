# WxWidgets-Minesweeper
My goal in making minesweeper game was to learn how to implement wxWidgets software works

This was done on Windows and on Visual Studio 2019.

To get this project running please follow the following steps

1. Download wxWidgets from www.wxwidgets.org.
Download the ZIP file.

2. Create a place where the ZIP file CONTENT can be stored and store it in that file.
File will be denoted as X.

3. Now we must build wxWidgets.
From file X open build file then open msw file then find the latest visual studio file.
In my case wx_vc16.sln was that file.

4. You should now be in Visual Studio IDE running wx_vc16.
Now locate the build tab then click on batch build.
From there you should see a window pop up that specifies which files I needed.
In my case I pressed select all and pressed build.
This will take some time. 
Press build again if any errors appier.
Close visual studio once that is done.

5. Create a new project on Visual Studio.
Make sure to include the Header Files, Source Files, Source Files and External Dependencies.

6. Add the .cpp and .h files in this repository to the appropriate file location

7. Go into the properties of the project.
Set configurations to all Configuration.
Go into C/C++ then into Precompiled Header and disable the Precompiled Header option.
Go into C/C++ then into general and write in the Additional Include Directories file "\...\X\include; \...\X\include\msvc"
Go to the Linker tab and write in the Additional Library Directories "\...\X\lib\vc_lib"
... is denoted the path to file X

8. Now you will be able to run and compile the code.



This project is proof of concept that it works to me and that I can proceed further in future projects.
This project was done through the structions of javidx9 youtube.


