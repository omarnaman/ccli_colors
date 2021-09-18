#include <string>
#include <iostream>
namespace clic
{

    // Color Modifiers
    const std::string MOD_4BIT = "\033[";
    const std::string MOD_8BIT = "\033[38;5;";
    const std::string MOD_RGB = "\033[38;2;";

    // 4-Bit Colors
    const std::string BLACK = "\033[30";
    const std::string RED = "\033[31";
    const std::string GREEN = "\033[32";
    const std::string YELLOW = "\033[33";
    const std::string BLUE = "\033[34";
    const std::string MAGENTA = "\033[35";
    const std::string CYAN = "\033[36";
    const std::string WHITE = "\033[37";

    const std::string BRIGHT_BLACK = "\033[90";
    const std::string BRIGHT_RED = "\033[91";
    const std::string BRIGHT_GREEN = "\033[92";
    const std::string BRIGHT_YELLOW = "\033[93";
    const std::string BRIGHT_BLUE = "\033[94";
    const std::string BRIGHT_MAGENTA = "\033[95";
    const std::string BRIGHT_CYAN = "\033[96";
    const std::string BRIGHT_WHITE = "\033[97";

    // 8-Bit Colors
    const std::string RED_SHADE1 = "\033[38;5;88";
    const std::string RED_SHADE2 = "\033[38;5;160";

    const std::string GREEN_SHADE1 = "\033[38;5;22";
    const std::string GREEN_SHADE2 = "\033[38;5;28";

    const std::string YELLOW_SHADE1 = "\033[38;5;142";
    const std::string YELLOW_SHADE2 = "\033[38;5;226";

    const std::string ORANGE_SHADE1 = "\033[38;5;166";
    const std::string ORANGE_SHADE2 = "\033[38;5;208";

    const std::string BLUE_SHADE1 = "\033[38;5;20";
    const std::string BLUE_SHADE2 = "\033[38;5;27";

    const std::string MAGENTA_SHADE1 = "\033[38;5;53";
    const std::string MAGENTA_SHADE2 = "\033[38;5;90";

    const std::string CYAN_SHADE1 = "\033[38;5;39";
    const std::string CYAN_SHADE2 = "\033[38;5;51";

    const std::string PINK = "\033[38;5;201";

    const std::string RESET = "\033[0m";

    // Modifiers
    const std::string MOD_BOLD = "1";
    const std::string MOD_FAINT = "2";
    const std::string MOD_ITALIC = "3";
    const std::string MOD_UNDERLINE = "4";
    const std::string MOD_SLOW_BLINK = "5";
    const std::string MOD_RAPID_BLINK = "6";
    const std::string MOD_CROSS_OUT = "9";

    template <typename T>
    T get_mods(T t1)
    {
        return t1;
    }

    template <typename T>
    T get_mods(T t1, T t2)
    {
        return t1 + ";" + t2;
    }
    template <typename T, typename... Args>
    T get_mods(T t1, T t2, Args... args)
    {
        std::string mod = t1 + ";" + t2;
        return get_mods(mod, args...);
    }

    template <typename... Args>
    std::string color_str(std::string text, std::string color, Args... args)
    {
        std::string mods = get_mods(color, args...);
        std::string res = mods + "m" + text + RESET;
        return res;
    }

    template <typename... Args>
    void color_print(std::string text, std::string color, Args... args)
    {
        std::string mods = get_mods(color, args...);
        std::string res = mods + "m" + text + RESET;
        std::cout<<res<<std::endl;
    }

}; // namespace clic