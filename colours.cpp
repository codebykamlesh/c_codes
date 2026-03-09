#include <iostream>
#include <string>

class Colors {
public:
    static constexpr const char* RESET   = "\033[0m";

    // Reds
    static constexpr const char* RED         = "\033[38;5;196m";
    static constexpr const char* DARK_RED    = "\033[38;5;124m";
    static constexpr const char* CRIMSON     = "\033[38;5;160m";
    static constexpr const char* SALMON      = "\033[38;5;216m";
    static constexpr const char* CORAL       = "\033[38;5;203m";

    // Oranges
    static constexpr const char* ORANGE      = "\033[38;5;208m";
    static constexpr const char* DARK_ORANGE = "\033[38;5;202m";
    static constexpr const char* GOLD        = "\033[38;5;220m";
    static constexpr const char* LIGHT_ORANGE= "\033[38;5;215m";
    static constexpr const char* AMBER       = "\033[38;5;214m";

    // Yellows
    static constexpr const char* YELLOW      = "\033[38;5;226m";
    static constexpr const char* LIGHT_YELLOW= "\033[38;5;229m";
    static constexpr const char* LEMON       = "\033[38;5;227m";
    static constexpr const char* MUSTARD     = "\033[38;5;178m";

    // Greens
    static constexpr const char* GREEN       = "\033[38;5;46m";
    static constexpr const char* DARK_GREEN  = "\033[38;5;22m";
    static constexpr const char* LIME        = "\033[38;5;118m";
    static constexpr const char* OLIVE       = "\033[38;5;100m";
    static constexpr const char* MINT        = "\033[38;5;121m";

    // Blues
    static constexpr const char* BLUE        = "\033[38;5;27m";
    static constexpr const char* NAVY        = "\033[38;5;18m";
    static constexpr const char* SKY_BLUE    = "\033[38;5;117m";
    static constexpr const char* LIGHT_BLUE  = "\033[38;5;123m";
    static constexpr const char* TURQUOISE   = "\033[38;5;45m";

    // Purples
    static constexpr const char* PURPLE      = "\033[38;5;129m";
    static constexpr const char* VIOLET      = "\033[38;5;93m";
    static constexpr const char* LAVENDER    = "\033[38;5;183m";
    static constexpr const char* PLUM        = "\033[38;5;96m";
    static constexpr const char* INDIGO      = "\033[38;5;54m";

    // Pinks
    static constexpr const char* MAGENTA     = "\033[38;5;201m";
    static constexpr const char* HOT_PINK    = "\033[38;5;205m";
    static constexpr const char* PINK        = "\033[38;5;213m";
    static constexpr const char* FUCHSIA     = "\033[38;5;13m";
    static constexpr const char* ROSE        = "\033[38;5;211m";

    // Browns & Earth tones
    static constexpr const char* BROWN       = "\033[38;5;94m";
    static constexpr const char* TAN         = "\033[38;5;180m";
    static constexpr const char* BEIGE       = "\033[38;5;223m";
    static constexpr const char* CHESTNUT    = "\033[38;5;130m";
    static constexpr const char* SAND        = "\033[38;5;187m";

    // Exotic / Extra shades (just a sample, you’d keep adding until ~100)
    static constexpr const char* AQUA        = "\033[38;5;51m";
    static constexpr const char* CYAN        = "\033[38;5;51m";
    static constexpr const char* TEAL        = "\033[38;5;30m";
    static constexpr const char* EMERALD     = "\033[38;5;48m";
    static constexpr const char* JADE        = "\033[38;5;35m";
    static constexpr const char* PEACH       = "\033[38;5;217m";
    static constexpr const char* APRICOT     = "\033[38;5;216m";
    static constexpr const char* MANGO       = "\033[38;5;214m";
    static constexpr const char* LILAC       = "\033[38;5;177m";
    static constexpr const char* SEA_GREEN   = "\033[38;5;84m";
    static constexpr const char* FOREST      = "\033[38;5;28m";
    static constexpr const char* AQUAMARINE  = "\033[38;5;86m";
    static constexpr const char* TURMERIC    = "\033[38;5;178m";
    static constexpr const char* BRICK       = "\033[38;5;131m";
    static constexpr const char* MAROON      = "\033[38;5;88m";
    static constexpr const char* BURGUNDY    = "\033[38;5;125m";
    static constexpr const char* CREAM       = "\033[38;5;230m";
    static constexpr const char* SNOW        = "\033[38;5;255m";

    // Additional Distinct Colors
    static constexpr const char* WHITE        = "\033[38;5;15m";
    static constexpr const char* LIGHT_GRAY   = "\033[38;5;250m";
    static constexpr const char* GRAY         = "\033[38;5;244m";
    static constexpr const char* DARK_GRAY    = "\033[38;5;236m";
    static constexpr const char* BLACK        = "\033[38;5;16m";
    static constexpr const char* ELECTRIC_BLUE = "\033[38;5;39m";
    static constexpr const char* DEEP_SKY      = "\033[38;5;33m";
    static constexpr const char* OCEAN_BLUE    = "\033[38;5;25m";
    static constexpr const char* NEON_GREEN    = "\033[38;5;82m";
    static constexpr const char* SPRING_GREEN  = "\033[38;5;48m";
    static constexpr const char* GRASS_GREEN   = "\033[38;5;34m";
    static constexpr const char* SUN_YELLOW    = "\033[38;5;220m";
    static constexpr const char* BRIGHT_GOLD   = "\033[38;5;221m";
    static constexpr const char* FIRE_ORANGE   = "\033[38;5;202m";
    static constexpr const char* SUNSET        = "\033[38;5;209m";
    static constexpr const char* NEON_PINK     = "\033[38;5;198m";
    static constexpr const char* DEEP_PINK     = "\033[38;5;199m";
    static constexpr const char* ROYAL_PURPLE  = "\033[38;5;63m";
    static constexpr const char* DARK_VIOLET   = "\033[38;5;92m";
    static constexpr const char* CHOCOLATE     = "\033[38;5;130m";
    static constexpr const char* COFFEE        = "\033[38;5;94m";
};

// Helper function
void printColor(const char* code, const std::string& name) {
    std::cout << code << name << Colors::RESET << std::endl;
}

int main() {
    // Reds
    printColor(Colors::RED, "RED");
    printColor(Colors::DARK_RED, "DARK_RED");
    printColor(Colors::CRIMSON, "CRIMSON");
    printColor(Colors::SALMON, "SALMON");
    printColor(Colors::CORAL, "CORAL");

    // Oranges
    printColor(Colors::ORANGE, "ORANGE");
    printColor(Colors::DARK_ORANGE, "DARK_ORANGE");
    printColor(Colors::GOLD, "GOLD");
    printColor(Colors::LIGHT_ORANGE, "LIGHT_ORANGE");
    printColor(Colors::AMBER, "AMBER");

    // Yellows
    printColor(Colors::YELLOW, "YELLOW");
    printColor(Colors::LIGHT_YELLOW, "LIGHT_YELLOW");
    printColor(Colors::LEMON, "LEMON");
    printColor(Colors::MUSTARD, "MUSTARD");

    // Greens
    printColor(Colors::GREEN, "GREEN");
    printColor(Colors::DARK_GREEN, "DARK_GREEN");
    printColor(Colors::LIME, "LIME");
    printColor(Colors::OLIVE, "OLIVE");
    printColor(Colors::MINT, "MINT");

    // Blues
    printColor(Colors::BLUE, "BLUE");
    printColor(Colors::NAVY, "NAVY");
    printColor(Colors::SKY_BLUE, "SKY_BLUE");
    printColor(Colors::LIGHT_BLUE, "LIGHT_BLUE");
    printColor(Colors::TURQUOISE, "TURQUOISE");

    // Purples
    printColor(Colors::PURPLE, "PURPLE");
    printColor(Colors::VIOLET, "VIOLET");
    printColor(Colors::LAVENDER, "LAVENDER");
    printColor(Colors::PLUM, "PLUM");
    printColor(Colors::INDIGO, "INDIGO");

    // Pinks
    printColor(Colors::MAGENTA, "MAGENTA");
    printColor(Colors::HOT_PINK, "HOT_PINK");
    printColor(Colors::PINK, "PINK");
    printColor(Colors::FUCHSIA, "FUCHSIA");
    printColor(Colors::ROSE, "ROSE");

    // Browns & Earth tones
    printColor(Colors::BROWN, "BROWN");
    printColor(Colors::TAN, "TAN");
    printColor(Colors::BEIGE, "BEIGE");
    printColor(Colors::CHESTNUT, "CHESTNUT");
    printColor(Colors::SAND, "SAND");

    // Exotic / Extra shades
    printColor(Colors::AQUA, "AQUA");
    printColor(Colors::CYAN, "CYAN");
    printColor(Colors::TEAL, "TEAL");
    printColor(Colors::EMERALD, "EMERALD");
    printColor(Colors::JADE, "JADE");
    printColor(Colors::PEACH, "PEACH");
    printColor(Colors::APRICOT, "APRICOT");
    printColor(Colors::MANGO, "MANGO");
    printColor(Colors::LILAC, "LILAC");
    printColor(Colors::SEA_GREEN, "SEA_GREEN");
    printColor(Colors::FOREST, "FOREST");
    printColor(Colors::AQUAMARINE, "AQUAMARINE");
    printColor(Colors::TURMERIC, "TURMERIC");
    printColor(Colors::BRICK, "BRICK");
    printColor(Colors::MAROON, "MAROON");
    printColor(Colors::BURGUNDY, "BURGUNDY");
    printColor(Colors::CREAM, "CREAM");
    printColor(Colors::SNOW, "SNOW");

    // Extra Distinct Colors
    printColor(Colors::WHITE, "WHITE");
    printColor(Colors::LIGHT_GRAY, "LIGHT_GRAY");
    printColor(Colors::GRAY, "GRAY");
    printColor(Colors::DARK_GRAY, "DARK_GRAY");
    printColor(Colors::BLACK, "BLACK");
    printColor(Colors::ELECTRIC_BLUE, "ELECTRIC_BLUE");
    printColor(Colors::DEEP_SKY, "DEEP_SKY");
    printColor(Colors::OCEAN_BLUE, "OCEAN_BLUE");
    printColor(Colors::NEON_GREEN, "NEON_GREEN");
    printColor(Colors::SPRING_GREEN, "SPRING_GREEN");
    printColor(Colors::GRASS_GREEN, "GRASS_GREEN");
    printColor(Colors::SUN_YELLOW, "SUN_YELLOW");
    printColor(Colors::BRIGHT_GOLD, "BRIGHT_GOLD");
    printColor(Colors::FIRE_ORANGE, "FIRE_ORANGE");
    printColor(Colors::SUNSET, "SUNSET");
    printColor(Colors::NEON_PINK, "NEON_PINK");
    printColor(Colors::DEEP_PINK, "DEEP_PINK");
    printColor(Colors::ROYAL_PURPLE, "ROYAL_PURPLE");
    printColor(Colors::DARK_VIOLET, "DARK_VIOLET");
    printColor(Colors::CHOCOLATE, "CHOCOLATE");
    printColor(Colors::COFFEE, "COFFEE");
}