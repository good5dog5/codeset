// Create a maker funciton called quo. It makes an 
// object with a get_sattus method and a private 
// status property.

var qun = function (status) {
   return {
      get_status: function () {
         return status;
      }
   };
};

// Make an instance of quo.

var myQun = qun("Amazed");
//document.writeln(myQun.get_status());
print(myQun.get_status());
