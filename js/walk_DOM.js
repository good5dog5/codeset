function recurseDomChildren(start, output)
{
   var nodes;
   if(start.childNodes)
   {
      nodes = start.childNodes;
      loopNodeChildren(nodes, output);
   }
}

function loopNodeChildren(nodes, output)
{
   var node;
   for(var i = 0; i < nodes.length; i++)
   {
      node = nodes[i];
      if(output)
      {
         outputNode(node);
      }
      if(node.childNodes)
      {
         recurseDomChildren(node, output);
      }
   }
}

function outputNode(node)
{
   var whitespace = /^\s+$/g;
   if(node.nodeType === 3)
   {
      console.log("element: " + node.value);
   }else if (node.nodeType === 1) {}
}

recurseDomChildren(document.documentElement, true);
