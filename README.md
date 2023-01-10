image:https://img.shields.io/packagist/stars/bjh/bjhm?style=for-the-badge[Packagist Stars]
# PhoneApp

## Description

PhoneApp is an application developed in Embedded Wizard. It is a phone that has three applications: phone, messages and settings. 
- The phone application allows users to engage into phone conversations, to add contacts to the device, add them to favorites, format a number using the keyboard and a page that shows the user's call history.
- The Messages application allows the user to chat with other users from their contact list.
- The settings application allows the device owner to set its card id (phone number), set the language and the  theme of the device.

## Demo
A demo video kerul ide beiilesztesre

## Installation

Go to [Embedded Wizard](https://www.embedded-wizard.de/) official page and download version [12](https://www.embedded-wizard.de/news/embedded-wizard-12) or higher. Follow the setup instructions. To run this project, you need to activate a license, it does not work on free edition.


## Usage
Before going any further, go to the next [repository](https://github.com/amalia-angela/PhpServer) and follow the instructions written in the [README.md](https://github.com/amalia-angela/PhpServer/blob/main/README.md). 

1. Open Embedded Wizard, go to *Project -> Open -> PhoneApp\PhoneApp.*
2. Set Profile to *WebGILocalhost* and build this profile 	(⚙️). The code will be generated to the *C:\xampp\htdocs\phoneapp* output directory.
3. Go to the output directory, rename *EmWiApp.html to index.html*, and open the html document into a code editor and add the following code snippet.
```javascript
<SCRIPT type="text/javascript">

EmWiApp._Init( "_canvas_EmWiApp");
const params = new Proxy(new URLSearchParams(window.location.search), {
	    get: (searchParams, prop) => searchParams.get(prop),
		});
let value = params.myID;	  
EmWiApp.Application.Application.SetMyNumber(+value);

</SCRIPT>
```
4. Open a web browser and type [http://localhost/phoneapp/?myID=2](http://localhost/phoneapp/?myID=2). You can also give other values ​​to the myID parameter.
5. Test the applicaton 😀.



## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

## License

[MIT](https://choosealicense.com/licenses/mit/)