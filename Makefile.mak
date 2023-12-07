CXX = g++                 # Compilateur C++
CXXFLAGS = -std=c++11      # Options de compilation (C++11 ici)

SRC_DIR = src              # Répertoire des sources
BUILD_DIR = build          # Répertoire de construction
BIN_DIR = bin              # Répertoire de l'exécutable

# Liste des fichiers source
SRCS = $(wildcard $(SRC_DIR)/*.cpp)

# Liste des fichiers objets
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

# Nom de l'exécutable
TARGET = easystore

# Commande de compilation
$(BIN_DIR)/$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Commande de compilation pour chaque fichier source
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyer les fichiers temporaires
clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

# Règle par défaut
all: $(BIN_DIR)/$(TARGET)

# Exécute l'exécutable
run: all
	./$(BIN_DIR)/$(TARGET)
