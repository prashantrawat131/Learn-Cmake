# LEARN CMAKE (C++, VS CODE, Windows 10)

> Note: The below setup is for first time setup and I am using cmake version 3.29.0. In future the files in my repository will have changes but if you want to start from scratch and the below setup.

## Setup
1. Install Cmake Installer from [here](https://cmake.org/download/)
> Note: Make sure to check the set system path option during installation

2. Now in vscode, install the CMake Tools extension by Microsoft

3. Create a new folder for your project and open it in vscode

4. Create a new file named CMakeLists.txt in the root of your project folder

5. Add the following code to the CMakeLists.txt file
    ```cmake
    cmake_minimum_required(VERSION x.x.x)
    project(HelloWorld)
    add_executable(main main.cpp)
    ```
    > Note: Replace x.x.x with the version of cmake installed on your system. You can check the version of cmake installed on your system by running the following command in the terminal
    ```bash
    cmake --version
    ```

6. Create a new file named main.cpp in the root of your project folder

7. Write some boilerplate code in the main.cpp file. Make sure it works.

8. Create another folder named build in the root of your project folder

9. Use command prompt and move to the build folder.

10. Run the following command in the terminal
    ```bash
    cmake ..
    ```

11. Now run the following command in the terminal
    ```bash
    cmake --build .
    ```
    > Note: This will create a new folder named Debug in the build folder. Inside the Debug folder, you will find the executable file named main.exe

12. Run the following command in the terminal
    ```bash
    .\Debug\main.exe
    ```

13. If everything works, you are good to go. You can now start writing your code and build it using cmake.

## What I learned

- Cmake initially creates a build configuration file for the project. This happens when we use the command:
    ```bash
    cmake ..
    ```
    In this command, we are inside the build folder which is inside the main project root folder. The .. in the command tells cmake to look for the CMakeLists.txt file in the parent directory of the build folder.

- Cmake then uses the build configuration file to build the project. This happens when we use the command:
    ```bash
    cmake --build .
    ```
    In this command, we are inside the build folder which is inside the main project root folder. The . in the command tells cmake to look for the build configuration file in the current directory. Cmake then uses the build configuration file to build the project in the current directory which is the build directory. Sometimes it is directly as main.exe or in a Debug folder as main.exe.

