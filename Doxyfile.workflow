doxygen >/dev/null 1>/dev/null 2>/dev/null
cd latex 
  make pdf >/dev/null 1>/dev/null 2>/dev/null 
  mv -f refman.pdf ../extras/rESP32C++t.pdf 
  cd .. 
rm -Rf latex

# EOF
