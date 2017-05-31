jezeli (over_the_line()) {
  go_back(1/2);
  obroc_w_lewo(1/4);
} inaczej {
  niech odleglosc = how_far_is_the_closest_object();
  niech cos_jest_blisko = false; //odleglosc < 15;
  
  jezeli (cos_jest_blisko) {
    do_przodu(1/4);
  } inaczej {
    obroc_w_lewo(0.25);
    do_przodu(1/2);
  }
}

