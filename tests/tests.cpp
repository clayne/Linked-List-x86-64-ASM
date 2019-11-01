//
// Created by Mateusz Stompór on 20/06/2019.
//

#include "test_end.h"
#include "test_size.h"
#include "test_begin.h"
#include "test_empty.h"
#include "test_delete.h"
#include "test_insert.h"
#include "test_iterate.h"
#include "test_dereference.h"
#include "test_release_list.h"
#include "test_iterator_equal.h"
#include "test_alloc_dealloc_list.h"
#include "test_alloc_dealloc_iterator.h"

int main (int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
