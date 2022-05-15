// Copyright 2022 GHA Test Team
#include <gtest/gtest.h>
#include "task.h"



TEST(TEST1, 1) {
    int cass_number = 5;
    int max_num_of_clients = 120;
    int clients_intensity = 15;
    int serving_speed = 30;
    int average_item_num = 10;
    int max_line_len = 5;
    Market FiveyorOchka(cass_number, max_num_of_clients, clients_intensity, serving_speed, average_item_num, max_line_len); 
    FiveyorOchka.start();
    ASSERT_EQ(result->FiveyorOchka.getAmountOfUnservedCustomers(), 115);
}

TEST(TEST2, 2) {
    int cass_number = 5;
    int max_num_of_clients = 120;
    int clients_intensity = 15;
    int serving_speed = 30;
    int average_item_num = 10;
    int max_line_len = 5;
    Market FiveyorOchka(cass_number, max_num_of_clients, clients_intensity, serving_speed, average_item_num, max_line_len);
    FiveyorOchka.start();
    ASSERT_EQ(result->FiveyorOchka.getAmountOfServedCustomers(), 5);
}

TEST(TEST3, 3) {
    int cass_number = 5;
    int max_num_of_clients = 120;
    int clients_intensity = 15;
    int serving_speed = 30;
    int average_item_num = 10;
    int max_line_len = 5;
    Market FiveyorOchka(cass_number, max_num_of_clients, clients_intensity, serving_speed, average_item_num, max_line_len);
    FiveyorOchka.start();
    ASSERT_EQ(result->FiveyorOchka.getAverageLineLength()(), 1;
}

TEST(TEST4, 4) {
    int cass_number = 5;
    int max_num_of_clients = 120;
    int clients_intensity = 15;
    int serving_speed = 30;
    int average_item_num = 10;
    int max_line_len = 5;
    Market FiveyorOchka(cass_number, max_num_of_clients, clients_intensity, serving_speed, average_item_num, max_line_len);
    FiveyorOchka.start();
    ASSERT_EQ(FiveyorOchka.getAverageWaitingTimeForClient(), 300);
}

TEST(TEST5, 5) {
    int cass_number = 5;
    int max_num_of_clients = 120;
    int clients_intensity = 15;
    int serving_speed = 30;
    int average_item_num = 10;
    int max_line_len = 5;
    Market FiveyorOchka(cass_number, max_num_of_clients, clients_intensity, serving_speed, average_item_num, max_line_len);
    FiveyorOchka.start();
    EXPECT_EQ(supermarket.getAverageWorkTime(), 1374);
}
