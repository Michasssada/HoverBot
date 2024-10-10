package main

import (
	"flag"

	htgotts "github.com/hegedustibor/htgo-tts"
	"github.com/hegedustibor/htgo-tts/handlers"
	"github.com/hegedustibor/htgo-tts/voices"
)

var (
	strFlag string
)

func main() {
	speech := htgotts.Speech{
		Folder:   "temp",
		Language: voices.Polish, // You can change this to voices.English
		Handler:  &handlers.Native{},
	}

	flag.StringVar(&strFlag, "speak", "Text not included!", "Text to say!")
	flag.Parse()

	err := speech.Speak(strFlag)
	if err != nil {
		panic(err)
	}
}
