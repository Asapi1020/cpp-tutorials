# cpp-tutorials

C++ tutorials for me

## 環境設定
### コンパイラ g++
- [MinGW-W-64-builds](https://www.mingw-w64.org/downloads/)
  - [参考動画](https://www.youtube.com/watch?v=F43kPbJmSaM&t=592s)
  - PATHを通して `g++ -v` が情報を返すようになれば完了

### エディタ VS Code
次の拡張機能をインストール
- C/C++ Extension Pack
- Clang-Format
- Code Runner (optional)

### パッケージ管理ツール Conan2
- インストール
  - Windows: `choco install conan -y`
  - pipインストール済環境: `pip install conan`
  - `conan --version` がバージョン情報を返せば完了
- 初期設定
  - `conan profile detect`
  - `%USERPROFILE%/.conan/profile/default` が生成されるので編集する（リポジトリにサンプルファイルがある）
- 使い方
  - インポート
  1. 必要なパッケージを定義: ルートディレクトリに `conanfile.txt` を作る（未作成の場合）
  2. パッケージをインストール: `conan install . --output-folder=build --build=missing`
  - パブリッシュ
  1. リモートリポジトリを用意する（ここではJFROG Artifactoryを用いる）
  2. リモートリポジトリを設定してログインする
      ```
      conan remote add {REPOSITORY} {URL}
      conan remote login -p {TOKEN} {REPOSITORY} {EMAIL}
      ```
  3. conanfile.pyを用意してパッケージを作成: `conan create .`
  4. パブリッシュする `conan upload {LIBRARY}/{VERSION} --remote={REPOSITORY}`



## 開発
### フォーマット
- 拡張機能でファイル保存時のフォーマットが可能
- あるいはclang-format.exeをPATHに通せば、`clang-format -i .\src\main.cpp\` で特定のファイルをフォーマット可能

### ビルド
- GUIで操作する場合
  - Ctrl + Shift + Pでパレットを開く
  1. CMake: Configure で構成を選択（デフォルトでconan-release）
  2. CMake: Buildを実行
- CLIで操作する場合
  - cmake.exeにPATHを通しておく
  1. 構成を指定
      ```
      cmake -B build -DCMAKE_TOOLCHAIN_FILE="conan_toolchain.cmake" -DCMAKE_BUILD_TYPE=Release
      ```
  2. ビルド
      ```
      cmake --build build --config Release
      ```
