#include <Windows.h>
#include <filesystem>
#include <thread>

std::filesystem::path mod_path = "C:\\Users\\YuSuiXian\\Saved Games\\YuanShenMod\\3dmigoto";
std::filesystem::path mod_exe = mod_path / "3DMigoto Loader.exe";
std::filesystem::path game_path = "C:\\Program Files\\Genshin Impact\\Genshin Impact Game";
std::filesystem::path game_exe = game_path / "YuanShen.exe";

int main()
{

    // 模拟双击启动，环境位于 mod_path
    ShellExecuteA(NULL, "open", mod_exe.string().c_str(), NULL, mod_path.string().c_str(), SW_SHOW);

    // 等待 3dmigoto 启动
    std::this_thread::sleep_for(std::chrono::seconds(1));

    // 模拟双击启动，环境位于 game_path
    ShellExecuteA(NULL, "open", game_exe.string().c_str(), NULL, game_path.string().c_str(), SW_SHOW);

    return 0;
}