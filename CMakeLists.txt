cmake_minimum_required(VERSION 3.21)
project(weekly_assignment)

set(CMAKE_CXX_STANDARD 14)

add_executable(weekly_assignment main.cpp week5/week5.cpp week8/week8.cpp week8/shapes.cpp
        week8/shapes.h week9/fibonacci.cpp week9/Levenshtein.cpp week9/Reverse.cpp
        week9/palindrome.cpp week10/List.cpp week10/List.h week11/FibonacciTrees.cpp
        week2/factorization.cpp mix/write_read_file/write_read_file.cpp mix/generics/generic.cpp
        old_exams/may_22/ex01/ex01-main.cpp old_exams/may_22/ex01/ex01-library.cpp
        old_exams/may_22/ex02/ex02-library.cpp
        old_exams/may_22/ex02/ex02-main.cpp
        old_exams/may_22/ex03/ex03-library.cpp
        old_exams/may_22/ex03/ex03-main.cpp
        old_exams/may_22/ex04/ex04-library.cpp
        old_exams/may_22/ex04/ex04-main.cpp


        )
