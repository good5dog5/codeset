String.method('deentityify', function() {
// The entity table. It maps entity names to
// characters.
   
   var entity = {
      quot: '"',
      lt : '<',
      gt : '>'
   };

   return function () {
// This is the deenityify method. It calls the string 
// replace method, looking for substrins that start
// with '&' and end with ';'. If the characters in
// between are in the entity table, then replace the 
// entity with the character form the table. It uses
// a regular expression.
      
      return this.replace(/&([^&;]+);/g,
          function (a, b) {
             var r = entity[b];
             return typeof r === 'string' ? r : a;
          }
      );
  };
}());

document.writeln('&lt;&quot;' .deentityify());
