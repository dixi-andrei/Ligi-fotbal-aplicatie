cmake_minimum_required(VERSION 3.25)
project(Transfermarkt)

set(CMAKE_CXX_STANDARD 17)

add_executable(Transfermarkt main.cpp Jucator.cpp Jucator.h Stats_Jucator.cpp Stats_Jucator.h Transfer.cpp Transfer.h Club.cpp Club.h Liga.cpp Liga.h Antrenor.cpp Antrenor.h Persoana.cpp Persoana.h IPersoana.cpp IPersoana.h TransfermarktException.cpp TransfermarktException.h TransferException.cpp TransferException.h)
