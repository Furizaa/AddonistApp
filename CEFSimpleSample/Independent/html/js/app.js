$(document).ready(function() {
    $('.btn').click(function() {
        var t = window.$$cBindings.ChangeTextInJS('Hello World!');
        alert(t);
    });
});

function ChangeText(text) {
    $('#text').html(text);
}