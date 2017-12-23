cmake_minimum_required(VERSION 3.8)
project(FourInARowUniveristyProject)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        SPArrayList.c
        SPArrayList.h
        SPArrayListUnitTest.c
        SPFIARGame.h
        SPFIARGameUnitTest.c
        SPFIARParser.c
        SPFIARParser.h
        SPFIARParserUnitTest.c
        SPMainAux.h
        SPMinimax.h
        SPMinimaxNode.h
        unit_test_util.h)

add_executable(FourInARowUniveristyProject ${SOURCE_FILES})