function currying(fn) {

   var l;
   var slice = Array.prototype.slice, 
       stored_args = slice.call(arguments, l);


console.log(stored_args);
   return function() {
      var new_args = slice.call(arguments),
          args = stored_args.concat(new_args);

      return fn.apply(null, args);
   };
}

function m(x, y) {

   return x * y;
}

var new_m = currying(m, 5);
new_m(4);
new_m(5);
new_m(6);
new_m(7);
new_m(8);
