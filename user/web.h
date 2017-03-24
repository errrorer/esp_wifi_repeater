#define CONFIG_PAGE "HTTP/1.0 200 OK\r\nContent-Type: text/html\r\n\r\n\
<html>\
<head></head>\
<body>\
    <h1>ESP WiFi NAT Router Config</h1>\
<div id='config'>\
    <script>\
    if (window.location.search.substr(1) != '')\
    {\
    document.getElementById('config').display = 'none';\
    document.body.innerHTML ='<h1>ESP WiFi NAT Router Config</h1>The new settings have been sent to the device...';\
    }\
    </script>\
    <h2>STA Settings</h2>\
    <form action='' method='GET'>\
    <table>\
    <tr>\
        <td>SSID:</td>\
        <td><input type='text' name='ssid'/></td>\
    </tr>\
    <tr>\
        <td>Password:</td>\
        <td><input type='text' name='password'/></td>\
    </tr>\
    <tr>\
        <td></td>\
        <td><input type='submit' value='Connect'/></td>\
    </tr>\
\
    </table>\
    <small>\
    <b>Notes</b></br >\
    <i>* Connect: </i>system will be reset to update values<br />\
    </small>\
    </form>\
\
    <h2>Soft AP Settings</h2>\
    <form action='' method='GET'>\
    <table>\
    <tr>\
        <td>SSID:</td>\
        <td><input type='text' name='ap_ssid'/></td>\
    </tr>\
    <tr>\
        <td>Password:</td>\
        <td><input type='text' name='ap_password'/></td>\
    </tr>\
    <tr>\
        <td>Security:</td>\
        <td>\
         <select name='ap_open'>\
         <option value='' selected></option>\
         <option value='open'>Open</option>\
         <option value='wpa2'>WPA2</option>\
        </select>\
        </td>\
    </tr>\
    <tr>\
        <td>Subnet:</td>\
        <td><input type='text' name='network'/></td>\
    </tr>\
    <tr>\
        <td></td>\
        <td><input type='submit' value='Set' /></td>\
    </tr>\
    </table>\
    <small>\
    <b>Notes</b></br >\
    <i>* Password: </i>min. 8 chars<br />\
    <i>* Set: </i>system will be reset to update values<br />\
    </small>\
    </form>\
\
    <h2>Device Management</h2>\
    <form action='' method='GET'>\
    <table>\
    <tr>\
        <td>Reset Device:</td>\
        <td><input type='submit' name='reset' value='Restart'/></td>\
    </tr>\
    </table>\
    </form>\
</div>\
</body>\
</html>\
"
