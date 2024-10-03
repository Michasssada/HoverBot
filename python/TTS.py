import argparse
from gtts import gTTS
import os
# Create the parser
parser = argparse.ArgumentParser(description='Process a greeting.')

# Add a positional argument
parser.add_argument('greeting', type=str, help='A greeting message')

# Parse the arguments
args = parser.parse_args()

# Print the greeting
# Text you want to convert to audio
text = "Hello, how are you today?"

# Language in which you want to convert
language = 'en'

# Create a gTTS object
tts = gTTS(text=text, lang=language, slow=False)

# Save the audio file
tts.save("output.mp3")

# Optionally, you can play the audio file (on Windows)
os.system("start output.mp3")  # For Mac use "afplay output.mp3"