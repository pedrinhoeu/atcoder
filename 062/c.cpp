#include <iostream>
#include <algorithm>

int main() {
    int H, W;
    std::cout << "Digite a altura (H) e a largura (W) da barra de chocolate: ";
    std::cin >> H >> W;

    int diff = 9999999; // Diferença mínima inicializada com um valor máximo

    // Divisão vertical
    for (int i = 1; i < W; i++) {
        int area1 = i * H; // Área do primeiro retângulo
        int area2 = (W - i) * H; // Área do segundo retângulo
        int area3 = W * (H - std::max(area1 / W, area2 / (W - i))); // Área do terceiro retângulo

        int max_area = std::max(area1, std::max(area2, area3));
        int min_area = std::min(area1, std::min(area2, area3));

        diff = std::min(diff, max_area - min_area);
    }

    // Divisão horizontal
    for (int i = 1; i < H; i++) {
        int area1 = i * W; // Área do primeiro retângulo
        int area2 = (H - i) * W; // Área do segundo retângulo
        int area3 = H * (W - std::max(area1 / H, area2 / (H - i))); // Área do terceiro retângulo

        int max_area = std::max(area1, std::max(area2, area3));
        int min_area = std::min(area1, std::min(area2, area3));

        diff = std::min(diff, max_area - min_area);
    }

    std::cout << "A diferença mínima entre as áreas é: " << diff << std::endl;

    return 0;
}
