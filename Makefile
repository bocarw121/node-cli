all: build-test-env

build-test-env:
						@echo "building test env"
						mkdir server
						g++ -o ./bin/node -std=gnu++17 ./src/Sources/*.cpp
						cd server && ../bin/node 

build:
		@echo "Building..."
		g++ -o ./bin/node -std=gnu++17 ./src/Sources/*.cpp
						

clean:
		@echo "Cleaning test env"
		rm -rf server
