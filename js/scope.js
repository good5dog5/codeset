var foo = function () {
   var a = 1, b = 2, c = 3;

   var bar = function () {
      var b = 4, c = 5;
      a += b + c;
      document.write("In bar():" + "<br>")
      document.write(a + " ");
      document.write(b + " ");
      document.write(c + "<br>");
   };
      document.write(a + " ");
      document.write(b + " ");
      document.write(c + "<br>");

      bar();

      document.write(a + " ");
      document.write(b + " ");
      document.write(c + "<br>");

};
foo.apply();
