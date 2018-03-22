namespace: pxt;


  //%
  void init(){
    uBit.init();

    uBit.display.scroll("HELLO WORLD! :)");

    release_fiber();
	}
}