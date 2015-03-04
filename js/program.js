var add = function(a, b) {
   return a + b;
}

var Qun = function(string) {
   this.status = string;
};
Qun.prototype.get_status = function() {
   return this.status;
};
var array = [3, 4];
var sum = add.apply(null, array);

var statusObject = {
   status: "A-OK"
};

var status = Qun.prototype.get_status.apply(statusObject);




Function.prototype.method = function (name, func){
   this.prototype[name] = func;
   return this;
};



