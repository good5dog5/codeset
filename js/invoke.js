function myFun(a, b) {
   return a * b;
}
function myFun1() {
   return this;
}
var myObject = {
   firstName: "Jordan",
   lastName: "Huang",
   fullName: function () {
      return this;
   }
};
function myFun2(arg1, arg2) {
   this.firstName = arg1;
   this.lastName = arg2;
   this.fullName = function() {
      return (this.firstName + " " + this.lastName);
   }
}

var x = new myFun2("Jordan", "Huang");
myArray = [10, 2];
document.writeln(myFun.call(x, 10, 2));

