var script = document.createElement('script');
script.src = 'http://code.jquery.com/jquery-1.11.0.min.js';
script.type = 'text/javascript';
document.getElementsByTagName('head')[0].appendChild(script);

$.fn.wait = function (time, type) {
   time = time || 1000;
   type = type || "fx";
   return this.queue(type, function() {
      var bb = this;
      setTimeout(function() {
         $(bb).dequeue();
      }, time);
   });
};
