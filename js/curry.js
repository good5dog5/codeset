var sendMsg = function (from, to, msg) {
   alert(["Hello " + to + ",", msg, "Sincerely,", "- " + from].join("\n"));
};

var sendMsgCurried = curry(sendMsg);
var sendMsgFromJohnBob = sednMsgCurried("John")("Bob");

sendMsgFromJohnBob("Come join the curry party!");
