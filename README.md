# 20 C++ Practice Programs

This repository contains 20 small, standalone C++ programs covering **arrays, structures, enums, pointers, and unions**. The examples use straightforward code and are intended for learning and lab practice.

> **LeetCode note:** The array and linked-list examples are inspired by common LeetCode-style problems. The `enum` and `union` sections are C++ language exercises, rather than standard LeetCode problem submissions. Each file includes its own `main()` so it can be compiled and run on a local computer; it is not formatted as a direct LeetCode submission.

## Folder layout

| Folder | Programs |
|---|---|
| `arrays/` | Two Sum, Best Time to Buy and Sell Stock, Move Zeroes, Maximum Subarray |
| `structures/` | Student details, search student by roll number, reverse linked list, middle of linked list |
| `enums/` | Day of week, traffic light, employee role, calculator operation |
| `pointers/` | Swap values, largest array element, reverse array, string length |
| `unions/` | Basic union demo, employee pay, shape area, product discount |

## Compile and run

You need a C++ compiler such as `g++` (for example, GCC or MinGW-w64 on Windows).

Open a terminal in the project folder and compile one file at a time. Example for Windows PowerShell:

```powershell
g++ .\arrays\01_two_sum.cpp -std=c++17 -o two_sum.exe
.\two_sum.exe
```

Example for Linux or macOS:

```bash
g++ arrays/01_two_sum.cpp -std=c++17 -o two_sum
./two_sum
```

Replace the source path and output name to run a different program. Since every `.cpp` file has its own `main()`, do **not** compile all 20 files into one executable at the same time.

## Push this folder to GitHub

### Option A: Using Git in the terminal (recommended)

1. Create a new repository on GitHub. To make the first push simple, you can leave **Add a README file** unchecked because this folder already contains one.
2. Open a terminal in this project folder.
3. Run these commands, replacing the URL with your repository's actual URL:

```bash
git init
git add .
git commit -m "Add 20 C++ practice programs"
git branch -M main
git remote add origin https://github.com/YOUR-USERNAME/YOUR-REPO.git
git push -u origin main
```

If Git asks you to identify yourself, configure the name and email you use for commits:

```bash
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
```

If `origin` already exists, check it with `git remote -v` rather than adding it again. If the GitHub repository already has commits, cloning that repository first and copying these folders into the clone is usually the cleanest way to avoid unrelated-history push errors.

### Option B: Upload through the GitHub website

1. Open your repository on GitHub.
2. Select **Add file → Upload files**.
3. Drag the files/folders into the upload area, or select the files to upload. Check the preview to make sure the five topic folders are preserved.
4. Enter a commit message such as `Add 20 C++ practice programs` and select **Commit changes**.

If the browser upload does not preserve the folder layout correctly, use Option A with Git.

## Good practice

Read each program, change the example inputs, and explain how it works before submitting it for a class or using it in an interview. These are learning examples; they are not intended to conceal who wrote them.
