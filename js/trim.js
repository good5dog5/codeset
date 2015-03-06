 var urlstr = "/this/is/a/folder/afile.txt";
 var r = /[^\/]*$/;
 urlstr.replace(r, '');
 alert(urlstr);
