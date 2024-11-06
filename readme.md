# C&C++ VSCode 配置演示

## 项目简介

本项目提供了一份详细的指南，帮助开发者在 Visual Studio Code 中配置 C 和 C++ 开发环境。该配置包括构建和调试环境的设置，旨在简化 C/C++ 项目的开发流程，提高开发效率。

## 步骤概述

1. **安装 Visual Studio Code和 C/C++ 插件**：确保安装 Visual Studio Code 和 [C/C++ 插件](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)。

2. **安装 MinGW**：安装MinGW方法众多,本文提供一种简单的方法.(验证安装成功，打开命令行输入gcc -v 或 g++ -v不报错即可)
    1. 请前往[WinLibs.com](https://winlibs.com/)下载存档文件。无需安装，只需提取存档并开始使用mingw32\bin 或 mingw64\bin中的程序即可。
    2. 在 Windows 上，右键点击“此电脑”或“计算机”，选择“属性”。
    3. 点击左侧的“高级系统设置”。
    4. 在弹出的窗口中，点击“环境变量”按钮。
    5. 在“系统变量”区域，找到并选择“Path”变量，点击“编辑”。
    6. 在“编辑环境变量”窗口中，点击“新建”，然后添加 MinGW 的 `bin` 目录路径（例如：`C:\path\to\mingw32\bin` 或 `C:\path\to\mingw64\bin`）。
    7. 点击“确定”保存设置，并关闭所有对话框。
    8. 重新打开命令行窗口以使更改生效。输入 `gcc -v` 或 `g++ -v` 验证是否配置成功。
  
3. **添加 `tasks.json` 和 `launch.json` 文件**：
   - 将本项目中的`.vscode`文件夹复制到项目根目录下。(或按照[tsaks文件配置介绍](./文档/tasks文件.md)和[launch文件配置介绍](./文档/launch文件.md)手动创建)

4. **配置完成**：
   - 本项目默认配置为当前工作区内项目文件夹下的 `.c` 或 `.cpp` 文件可以生成执行文件，并可以在工作区下创建多个文件夹，这样每个文件夹都能执行独立的任务。活动文件为 `.c` 或 `.cpp` 时即可，通过 F5 一键编译和调试。

## 贡献

欢迎任何形式的贡献！你可以通过提交问题、拉取请求或者分享你的想法来参与项目。
