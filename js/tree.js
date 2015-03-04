var walk_the_dom = function walk(node, func) {
   func(node);
   node = node.firstChild;
   while(node) {
      walk(node, func);
      node = node.nextSibling;
   }

};

var getElementByAttribute = function (att, value) {

   var results = [];

   walk_the_dom(document.body, function(node) {
      var actual = node.nodeType === 1 && node.getAttribute(att);

      if (typeof actual === 'string' && (actual === value || typeof value !== 'string')) {
         results.push(node);
      }

   });

   return results;
};

document.write(getElementByAttribute.apply());
