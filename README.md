# C++ Class Polymorphism Demo

## 🏫 项目简介
本项目是一个 **C++ 面向对象编程 (OOP)** 的示例项目，主要用于演示和练习 **多态性 (Polymorphism)** 的概念。项目基于 Visual Studio 开发。

## 🎯 核心概念
本项目涵盖了以下 C++ 核心特性：
*   **类与对象 (Classes & Objects)**
*   **继承 (Inheritance)**
*   **虚函数 (Virtual Functions)**: 实现运行时多态。
*   **纯虚函数与抽象类 (Pure Virtual Functions & Abstract Classes)**.
*   **动态绑定 (Dynamic Binding)**.

## 📂 项目结构
*   **`homework.sln`**: Visual Studio 解决方案文件。
*   **`homework.vcxproj`**: 项目工程文件。
*   **`源.cpp` / `源1.cpp`**: C++ 源代码文件，包含类的定义和主函数逻辑。

## 🛠️ 开发环境
*   **IDE**: Microsoft Visual Studio (推荐 VS 2019 或更新版本)
*   **Language Standard**: C++11 或更高

## 🚀 如何构建与运行
1.  使用 Visual Studio 打开 `homework.sln` 文件。
2.  在解决方案资源管理器中右键点击项目，选择 **"生成" (Build)**。
3.  构建成功后，点击 **"本地 Windows 调试器" (Local Windows Debugger)** 运行程序。

## 📝 示例代码说明
代码中通常包含基类（Base Class）和派生类（Derived Class），通过基类指针指向派生类对象，调用虚函数来展示多态行为。

```cpp
// 伪代码示例
class Base {
public:
    virtual void show() { cout << "Base"; }
};

class Derived : public Base {
public:
    void show() override { cout << "Derived"; }
};

Base* b = new Derived();
b->show(); // 输出 "Derived"
```

## 📄 License
MIT License
