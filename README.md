# cpp-tutorials

C++ tutorials for me

## VSCode
次の拡張機能をインストール
- C/C++ Extension Pack
- Clang-Format
- Code Runner (optional)

### ビルド
- Ctrl + Shift + Pでパレットを開き、CMake: Buildを実行
- または、cmake.exeにPATHを通せば、`cmake --build ./build/`

### フォーマット
- 拡張機能でファイル保存時のフォーマットが可能
- あるいはclang-format.exeをPATHに通せば、`clang-format -i .\src\main.cpp\` で特定のファイルをフォーマット可能
