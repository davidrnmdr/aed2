# Dark Wiki in docs/ (GitHub Pages)

A minimal, Wikipedia-inspired static site with a dark theme. This copy lives under `docs/` so you can publish via GitHub Pages using `main` + `/docs`.

## Publish on GitHub Pages
1. Go to Settings → Pages for this repository.
2. Source: Deploy from a branch
3. Branch: `main` and folder: `/docs`
4. Save and wait ~1–2 minutes.
5. Visit the URL GitHub shows (typically `https://davidrnmdr.github.io/aed2`).

## Structure
- `docs/index.html` — Home page
- `docs/about.html` — About/customization
- `docs/articles/` — Sample articles
- `docs/assets/css/styles.css` — Theme styles
- `docs/assets/js/main.js` — Simple search + mobile nav
- `docs/assets/favicon.svg` — Site icon
- `docs/.nojekyll` — Disables Jekyll processing
- `docs/404.html` — Custom not found page

## Customize
- Edit colors, spacing, and typography in `docs/assets/css/styles.css`.
- Add pages under `docs/articles/` and link them in the sidebar lists.
- Replace the favicon with your own branding.
