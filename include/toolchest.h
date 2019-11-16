#pragma once

namespace toolchest {

    template <typename t> void fill_i(t *tab,int size){
        for(int i =0 ; i < size;i++){
            tab[i] =i;
        }
    }

}